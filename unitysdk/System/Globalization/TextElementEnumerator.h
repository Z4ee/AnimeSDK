#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_GETTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x17940860)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17940850)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17940800)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x17940790)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x17940780)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x179407F0)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17940730)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17940920)
#define SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1793FFE0)

namespace System::Globalization
{
	inline static constexpr unsigned int TextElementEnumerator_TypeDefinitionIndex = 763;

	class TextElementEnumerator : public ::System::Object
	{
	public:
		::System::String* str; // 0x10
		::System::Int32 nextTextElementLen; // 0x18
		::System::Int32 index; // 0x1C
		::System::Int32 endIndex; // 0x20
		::System::Globalization::UnicodeCategory uc; // 0x24
		::System::Int32 currTextElementLen; // 0x28
		::System::Int32 charLen; // 0x2C
		::System::Int32 startIndex; // 0x30
		::System::Int32 strLen; // 0x34

		::System::Void _ctor(::System::String* str, ::System::Int32 startIndex, ::System::Int32 strLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR__CTOR_OFFSET))(this, str, startIndex, strLen);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_ONSERIALIZING_OFFSET))(this, ctx);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::String* GetTextElement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_GETTEXTELEMENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTELEMENTENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
