#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_CHECKTIMEOVER_OFFSET UNITYSDK_OFFSET(0x8AE540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x3AAC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_REFRESHALPHAANDMIRROR_OFFSET UNITYSDK_OFFSET(0x8AE5C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_REFRESHLIFETIME_OFFSET UNITYSDK_OFFSET(0x8AE550)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8AE410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE3B0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintManager_FootPrintRenderItem_TypeDefinitionIndex = 30497;

	struct alignas(4) FootPrintManager_FootPrintRenderItem
	{
		// static const ::System::Single k_Duration; // 0x0
		::System::Single spawnTime; // 0x10
		::UnityEngine::Matrix4x4 _localToWorldMatrix_k__BackingField; // 0x14
		::System::Single mirrorValue; // 0x54
		::System::Single lifeTime; // 0x58

		/*
		::System::Void _ctor(::System::Single spawnT, ::UnityEngine::Vector3 p, ::UnityEngine::Quaternion r, ::System::Single size, ::System::Boolean mirror)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM__CTOR_OFFSET))(this, spawnT, p, r, size, mirror);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Single spawnT, ::UnityEngine::Vector3 p, ::UnityEngine::Quaternion r, ::UnityEngine::Vector3 s, ::System::Boolean mirror)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM__CTOR_1_OFFSET))(this, spawnT, p, r, s, mirror);
		}
		*/

		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::System::Boolean CheckTimeOver(::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_CHECKTIMEOVER_OFFSET))(this, currentTime);
		}

		::System::Void RefreshLifeTime(::System::Single currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_REFRESHLIFETIME_OFFSET))(this, currentTime);
		}

		/*
		::UnityEngine::Vector2 RefreshAlphaAndMirror(::System::Single currentTime, ::System::Single fadeInLifeTime, ::System::Single fadeInMultiValue, ::System::Single fadeOutLifeTime, ::System::Single fadeOutMultiValue)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTRENDERITEM_REFRESHALPHAANDMIRROR_OFFSET))(this, currentTime, fadeInLifeTime, fadeInMultiValue, fadeOutLifeTime, fadeOutMultiValue);
		}
		*/
	};
}
