#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngineInternal/TypeInferenceRules.h"

namespace System { class String; }

#define UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EED83E0)
#define UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EED83D0)
#define UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED8300)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int TypeInferenceRuleAttribute_TypeDefinitionIndex = 3919;

	class TypeInferenceRuleAttribute : public ::System::Attribute
	{
	public:
		::System::String* _rule; // 0x10

		::System::Void _ctor(::UnityEngineInternal::TypeInferenceRules a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::TypeInferenceRules))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_TOSTRING_OFFSET))(this);
		}
	};
}
