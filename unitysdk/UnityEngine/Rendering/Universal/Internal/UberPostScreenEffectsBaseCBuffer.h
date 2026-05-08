#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UberPostScreenEffectsBaseCBuffer_TypeDefinitionIndex = 30407;

	struct alignas(4) UberPostScreenEffectsBaseCBuffer
	{
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked0; // 0x10
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked1; // 0x20
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked2; // 0x30
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked3; // 0x40
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked4; // 0x50
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked5; // 0x60
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked6; // 0x70
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked7; // 0x80
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked8; // 0x90
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked9; // 0xA0
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked10; // 0xB0
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked11; // 0xC0
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked12; // 0xD0
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked13; // 0xE0
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked14; // 0xF0
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked15; // 0x100
		::UnityEngine::Vector4 UberPostScreenEffectsBasePacked16; // 0x110
	};
}
