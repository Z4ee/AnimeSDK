#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Guid_GuidParseThrowStyle.h"
#include "unitysdk/System/Guid_ParseFailureKind.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_GUID_GUIDRESULT_GETGUIDPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x966DB0)
#define SYSTEM_GUID_GUIDRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x966C20)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_1_OFFSET UNITYSDK_OFFSET(0x966C40)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_2_OFFSET UNITYSDK_OFFSET(0x966CB0)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_3_OFFSET UNITYSDK_OFFSET(0x966D20)
#define SYSTEM_GUID_GUIDRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x966C30)

namespace System
{
	inline static constexpr unsigned int Guid_GuidResult_TypeDefinitionIndex = 259;

	struct alignas(8) Guid_GuidResult
	{
		::System::Guid parsedGuid; // 0x10
		::System::Guid_GuidParseThrowStyle throwStyle; // 0x20
		::System::Guid_ParseFailureKind m_failure; // 0x24
		::System::String* m_failureMessageID; // 0x28
		::System::Object* m_failureMessageFormatArgument; // 0x30
		::System::String* m_failureArgumentName; // 0x38
		::System::Exception* m_innerException; // 0x40

		::System::Void Init(::System::Guid_GuidParseThrowStyle canThrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_GuidParseThrowStyle))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_INIT_OFFSET))(this, canThrow);
		}

		::System::Void SetFailure(::System::Exception* nativeException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_OFFSET))(this, nativeException);
		}

		::System::Void SetFailure_1(::System::Guid_ParseFailureKind failure, ::System::String* failureMessageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_ParseFailureKind, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_1_OFFSET))(this, failure, failureMessageID);
		}

		::System::Void SetFailure_2(::System::Guid_ParseFailureKind failure, ::System::String* failureMessageID, ::System::Object* failureMessageFormatArgument)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_ParseFailureKind, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_2_OFFSET))(this, failure, failureMessageID, failureMessageFormatArgument);
		}

		::System::Void SetFailure_3(::System::Guid_ParseFailureKind failure, ::System::String* failureMessageID, ::System::Object* failureMessageFormatArgument, ::System::String* failureArgumentName, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid_ParseFailureKind, ::System::String*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_SETFAILURE_3_OFFSET))(this, failure, failureMessageID, failureMessageFormatArgument, failureArgumentName, innerException);
		}

		::System::Exception* GetGuidParseException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GUIDRESULT_GETGUIDPARSEEXCEPTION_OFFSET))(this);
		}
	};
}
