#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_CENTER_OFFSET UNITYSDK_OFFSET(0x22D9E90)
#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22D9EB0)
#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE_VALID_OFFSET UNITYSDK_OFFSET(0x22D9E80)
#define UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ArrayUtility_SearchRange_TypeDefinitionIndex = 39884;

	struct alignas(4) ArrayUtility_SearchRange
	{
		::System::Int32 begin; // 0x10
		::System::Int32 end; // 0x14

		::System::Void _ctor(::System::Int32 begin, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_ARRAYUTILITY_SEARCHRANGE__CTOR_OFFSET))(this, begin, end);
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
