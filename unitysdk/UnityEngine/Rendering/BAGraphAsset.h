#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define UNITYENGINE_RENDERING_BAGRAPHASSET_ADDINPUT_OFFSET UNITYSDK_OFFSET(0x1A474C10)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1A474C00)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ADDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1A474C20)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ALLOCNODE_OFFSET UNITYSDK_OFFSET(0x1A474BF0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_CALCNODEHASH_OFFSET UNITYSDK_OFFSET(0x1A474C40)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A474BD0)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ENABLENODE_OFFSET UNITYSDK_OFFSET(0x1A474C50)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_ENDALLOC_OFFSET UNITYSDK_OFFSET(0x1A474C30)
#define UNITYENGINE_RENDERING_BAGRAPHASSET_PLAYERLAYER_OFFSET UNITYSDK_OFFSET(0x1A474C60)
#define UNITYENGINE_RENDERING_BAGRAPHASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A474BE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAGraphAsset_TypeDefinitionIndex = 4607;

	class BAGraphAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Create_Internal(::UnityEngine::Rendering::BAGraphAsset* mono)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_CREATE_INTERNAL_OFFSET))(mono);
		}

		::System::Void AllocNode(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ALLOCNODE_OFFSET))(this, count);
		}

		::System::Void AddNode(::System::Int32 noedType, ::System::String* name, ::System::Boolean autoUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ADDNODE_OFFSET))(this, noedType, name, autoUpdate);
		}

		::System::Void AddInput(::System::Int32 nodeIndex, ::System::Int32 inputNodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ADDINPUT_OFFSET))(this, nodeIndex, inputNodeIndex);
		}

		::System::Void AddOutput(::System::Int32 nodeIndex, ::System::Int32 outputNodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ADDOUTPUT_OFFSET))(this, nodeIndex, outputNodeIndex);
		}

		::System::Void EndAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ENDALLOC_OFFSET))(this);
		}

		static ::System::Boolean CalcNodeHash(::UnityEngine::Rendering::BAGraphAsset* graphAsset, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::String* nodeName)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_CALCNODEHASH_OFFSET))(graphAsset, nodeHash, nodeName);
		}

		static ::System::Void EnableNode(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Boolean enable, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::UnityEngine::Rendering::BANodeHash&, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_ENABLENODE_OFFSET))(instance, nodeHash, enable, layer);
		}

		static ::System::Void PlayerLayer(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::Int32 layer, ::System::Boolean play)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHASSET_PLAYERLAYER_OFFSET))(instance, layer, play);
		}
	};
}
