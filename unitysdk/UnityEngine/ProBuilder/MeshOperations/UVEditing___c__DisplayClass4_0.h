#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB787B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0__SEWUVS_B__0_OFFSET UNITYSDK_OFFSET(0x1EB7B4E0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int UVEditing___c__DisplayClass4_0_TypeDefinitionIndex = 43330;

	class UVEditing___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 b; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SewUVs_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0__SEWUVS_B__0_OFFSET))(this, a1);
		}
	};
}
