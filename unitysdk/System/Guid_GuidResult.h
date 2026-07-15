#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Guid_GuidParseThrowStyle.h"
#include "unitysdk/System/Guid_ParseFailureKind.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_GUID_GUIDRESULT_GETGUIDPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3953290)
#define SYSTEM_GUID_GUIDRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x3953100)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x3953120)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_2_OFFSET UNITYSDK_OFFSET(0x3953190)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_3_OFFSET UNITYSDK_OFFSET(0x3953200)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x3953110)

namespace System
{
	inline static constexpr unsigned int Guid_GuidResult_TypeDefinitionIndex = 271;

	struct alignas(8) Guid_GuidResult
	{
		::System::Guid parsedGuid; // 0x10
		::System::Guid_GuidParseThrowStyle throwStyle; // 0x20
		::System::Guid_ParseFailureKind m_failure; // 0x24
		::System::String* m_failureMessageID; // 0x28
		::System::Object* m_failureMessageFormatArgument; // 0x30
		::System::String* m_failureArgumentName; // 0x38
		::System::Exception* m_innerException; // 0x40

		::System::Void Init(::System::Guid_GuidParseThrowStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_GuidParseThrowStyle))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_INIT_OFFSET))(this, a1);
		}

		::System::Void SetFailure(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_OFFSET))(this, a1);
		}

		::System::Void SetFailure_1(::System::Guid_ParseFailureKind a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_ParseFailureKind, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFailure_2(::System::Guid_ParseFailureKind a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_ParseFailureKind, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFailure_3(::System::Guid_ParseFailureKind a1, ::System::String* a2, ::System::Object* a3, ::System::String* a4, ::System::Exception* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_ParseFailureKind, ::System::String*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Exception* GetGuidParseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_GETGUIDPARSEEXCEPTION_OFFSET))(this);
		}
	};
}
