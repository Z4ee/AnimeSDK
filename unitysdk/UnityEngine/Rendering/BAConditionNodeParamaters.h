#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }

#define UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_ADDCONDITION_OFFSET UNITYSDK_OFFSET(0x1A474BB0)
#define UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_RESETCONDITION_OFFSET UNITYSDK_OFFSET(0x1A474BA0)
#define UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_SETCONDITIONOUTNODE_OFFSET UNITYSDK_OFFSET(0x1A474BC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAConditionNodeParamaters_TypeDefinitionIndex = 4605;

	struct alignas(1) BAConditionNodeParamaters
	{
		/*
		static ::System::Void ResetCondition(::UnityEngine::Rendering::BAGraphAsset* graphAsset, ::UnityEngine::Rendering::BANodeHash& nodeHash)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_RESETCONDITION_OFFSET))(graphAsset, nodeHash);
		}
		*/

		/*
		static ::System::Void AddCondition(::UnityEngine::Rendering::BAGraphAsset* graphAsset, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 paramType, ::System::Int32 cmpOp, ::System::Single refValue, ::UnityEngine::Rendering::BAParamRef& param)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::BAParamRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_ADDCONDITION_OFFSET))(graphAsset, nodeHash, paramType, cmpOp, refValue, param);
		}
		*/

		/*
		static ::System::Void SetConditionOutNode(::UnityEngine::Rendering::BAGraphAsset* graphAsset, ::UnityEngine::Rendering::BANodeHash& nodeHash, ::System::Int32 nextNodeIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_SETCONDITIONOUTNODE_OFFSET))(graphAsset, nodeHash, nextNodeIndex);
		}
		*/
	};
}
