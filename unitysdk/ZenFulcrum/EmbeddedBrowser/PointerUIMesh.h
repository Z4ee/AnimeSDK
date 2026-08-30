#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PointerUIBase.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MeshCollider; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D7EDA60)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_GETCURRENTHITLOCATION_OFFSET UNITYSDK_OFFSET(0x1D7EDEF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_MAPPOINTERTOBROWSER_OFFSET UNITYSDK_OFFSET(0x1D7EDB00)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_MAPRAYTOBROWSER_OFFSET UNITYSDK_OFFSET(0x1D7EDB90)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EE220)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIMesh_TypeDefinitionIndex = 38189;

	class PointerUIMesh : public ::ZenFulcrum::EmbeddedBrowser::PointerUIBase
	{
	public:
		::UnityEngine::MeshCollider* meshCollider; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RaycastHit>* rayHits; // 0xC0
		::UnityEngine::LayerMask layerMask; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Vector2 MapPointerToBrowser(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_MAPPOINTERTOBROWSER_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 MapRayToBrowser(::UnityEngine::Ray a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Ray, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_MAPRAYTOBROWSER_OFFSET))(this, a1, a2);
		}

		::System::Void GetCurrentHitLocation(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIMESH_GETCURRENTHITLOCATION_OFFSET))(this, a1, a2);
		}
	};
}
