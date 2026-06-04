#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Triangle.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS5_0__COLLECTFACEGROUPS_B__0_OFFSET UNITYSDK_OFFSET(0x1B0F7630)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F6920)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshValidation___c__DisplayClass5_0_TypeDefinitionIndex = 40893;

	class MeshValidation___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Func_2<::UnityEngine::ProBuilder::Triangle, ::System::Boolean>* __9__0; // 0x10
		::UnityEngine::ProBuilder::Triangle triangle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Triangle))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION___C__DISPLAYCLASS5_0__COLLECTFACEGROUPS_B__0_OFFSET))(this, a1);
		}
	};
}
