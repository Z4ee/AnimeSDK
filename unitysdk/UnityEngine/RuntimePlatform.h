#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimePlatform_TypeDefinitionIndex = 4007;

	enum class RuntimePlatform : ::System::Int32
	{
		OSXEditor = 0,
		OSXPlayer = 1,
		WindowsPlayer = 2,
		OSXWebPlayer = 3,
		OSXDashboardPlayer = 4,
		WindowsWebPlayer = 5,
		WindowsEditor = 7,
		IPhonePlayer = 8,
		XBOX360 = 10,
		PS3 = 9,
		Android = 11,
		NaCl = 12,
		FlashPlayer = 15,
		LinuxPlayer = 13,
		LinuxEditor = 16,
		WebGLPlayer = 17,
		MetroPlayerX86 = 18,
		WSAPlayerX86 = 18,
		MetroPlayerX64 = 19,
		WSAPlayerX64 = 19,
		MetroPlayerARM = 20,
		WSAPlayerARM = 20,
		WP8Player = 21,
		BlackBerryPlayer = 22,
		TizenPlayer = 23,
		PSP2 = 24,
		PS4 = 25,
		PSM = 26,
		XboxOne = 27,
		SamsungTVPlayer = 28,
		WiiU = 30,
		tvOS = 31,
		Switch = 32,
		Lumin = 33,
		Stadia = 34,
		CloudRendering = 35,
		GameCoreScarlett = 36,
		GameCoreXboxSeries = 36,
		GameCoreXboxOne = 37,
		PS5 = 38,
	};
}
