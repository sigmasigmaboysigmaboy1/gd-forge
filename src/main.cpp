#include <Geode/modify/MenuLayer.hpp>
using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto btn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("Forge GUI"),
            this,
            menu_selector(MyMenuLayer::onOpenForge)
        );

        auto menu = CCMenu::create();
        menu->addChild(btn);
        menu->setPosition({ 100, 100 });
        this->addChild(menu);

        return true;
    }

    void onOpenForge(CCObject*) {
        FLAlertLayer::create("Forge GUI", "It works!", "OK")->show();
    }
};
