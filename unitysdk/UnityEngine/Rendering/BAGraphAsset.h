#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BAGRAPHASSET_ADDINPUT_OFFSET UNITYSDK_OFFSET(0x1EAC56C0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1EAC56B0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ADDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1EAC56D0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ALLOCNODE_OFFSET UNITYSDK_OFFSET(0x1EAC56A0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_CALCNODEHASH_OFFSET UNITYSDK_OFFSET(0x1EAC56F0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1EAC5680)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ENABLENODE_OFFSET UNITYSDK_OFFSET(0x1EAC5700)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ENDALLOC_OFFSET UNITYSDK_OFFSET(0x1EAC56E0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_PLAYERLAYER_OFFSET UNITYSDK_OFFSET(0x1EAC5710)
#define UNITYENGINE_RENDERING_BAGRAPHASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5690)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAGraphAsset_TypeDefinitionIndex = 4796;

	class BAGraphAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Create_Internal(::UnityEngine::Rendering::BAGraphAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_CREATE_INTERNAL_OFFSET))(a1);
		}

		::System::Void AllocNode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ALLOCNODE_OFFSET))(this, a1);
		}

		::System::Void AddNode(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ADDNODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddInput(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ADDINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void AddOutput(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ADDOUTPUT_OFFSET))(this, a1, a2);
		}

		::System::Void EndAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ENDALLOC_OFFSET))(this);
		}

		static ::System::Boolean CalcNodeHash(::UnityEngine::Rendering::BAGraphAsset* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_CALCNODEHASH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EnableNode(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ENABLENODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PlayerLayer(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_PLAYERLAYER_OFFSET))(a1, a2, a3);
		}
	};
}
