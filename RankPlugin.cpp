#include "RankPlugin.h"
#include <stdint.h>


BAKKESMOD_PLUGIN(RankPlugin, "Rank Display Plugin", "0.1", PLUGINTYPE_FREEPLAY)

void RankPlugin::onLoad()
{
	cvarManager->log("RankPlugin loaded.");
	gameWrapper->HookEvent("Function TAGame.GameEvent_Tutorial_TA.OnInit", bind(&RankPlugin::OnFreeplayLoad, this, std::placeholders::_1));

	cvarManager->log("Event Hooked.");
}

void RankPlugin::OnFreeplayLoad(std::string eventName)
{
	cvarManager->log("[RankPlugin]:Freeplay loaded.");
}

void  RankPlugin::onUnload()
{

}