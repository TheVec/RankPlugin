#pragma once
#pragma comment(lib, "BakkesMod.lib")
#include <cstdint>
#include "bakkesmod\plugin\bakkesmodplugin.h"
#include <stdint.h>


class RankPlugin : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	RankPlugin();
	~RankPlugin();

	virtual void onLoad();
	virtual void onUnload();
	
	void OnFreeplayLoad(std::string eventName);
};

