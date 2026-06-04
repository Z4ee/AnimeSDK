#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_CENTER_OFFSET UNITYSDK_OFFSET(0x3875940)
#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3875960)
#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_VALID_OFFSET UNITYSDK_OFFSET(0x3875930)
#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ArrayUtility_SearchRange_TypeDefinitionIndex = 40711;

	struct alignas(4) ArrayUtility_SearchRange
	{
		::System::Int32 begin; // 0x10
		::System::Int32 end; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_VALID_OFFSET))(this);
		}

		::System::Int32 Center()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_CENTER_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_TOSTRING_OFFSET))(this);
		}
	};
}
