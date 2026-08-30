#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }

#define UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_ADDCONDITION_OFFSET UNITYSDK_OFFSET(0x1ED52A40)
#define UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_RESETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ED52A30)
#define UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_SETCONDITIONOUTNODE_OFFSET UNITYSDK_OFFSET(0x1ED52A50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAConditionNodeParamaters_TypeDefinitionIndex = 4794;

	struct alignas(1) BAConditionNodeParamaters
	{
		/*
		static ::System::Void ResetCondition(::UnityEngine::Rendering::BAGraphAsset* a1, ::UnityEngine::Rendering::BANodeHash& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_RESETCONDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void AddCondition(::UnityEngine::Rendering::BAGraphAsset* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::UnityEngine::Rendering::BAParamRef& a6)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::BAParamRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_ADDCONDITION_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::System::Void SetConditionOutNode(::UnityEngine::Rendering::BAGraphAsset* a1, ::UnityEngine::Rendering::BANodeHash& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphAsset*, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BACONDITIONNODEPARAMATERS_SETCONDITIONOUTNODE_OFFSET))(a1, a2, a3);
		}
		*/
	};
}
