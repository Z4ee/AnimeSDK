#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AcceptRejectRule.h"
#include "unitysdk/System/Data/MissingSchemaAction.h"
#include "unitysdk/System/Data/Rule.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentException; }
namespace System { class ArgumentOutOfRangeException; }
namespace System { class Exception; }
namespace System { class InvalidOperationException; }
namespace System { class NotSupportedException; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_1_OFFSET UNITYSDK_OFFSET(0x1BD56C00)
#define SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1BD56B90)
#define SYSTEM_DATA_COMMON_ADP_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x1BD56AB0)
#define SYSTEM_DATA_COMMON_ADP_INVALIDACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x1BD57570)
#define SYSTEM_DATA_COMMON_ADP_INVALIDENUMERATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BD57230)
#define SYSTEM_DATA_COMMON_ADP_INVALIDMISSINGSCHEMAACTION_OFFSET UNITYSDK_OFFSET(0x1BD575F0)
#define SYSTEM_DATA_COMMON_ADP_INVALIDOPERATION_OFFSET UNITYSDK_OFFSET(0x1BD56D00)
#define SYSTEM_DATA_COMMON_ADP_INVALIDRULE_OFFSET UNITYSDK_OFFSET(0x1BD57670)
#define SYSTEM_DATA_COMMON_ADP_INVALIDSEEKORIGIN_OFFSET UNITYSDK_OFFSET(0x1BD57410)
#define SYSTEM_DATA_COMMON_ADP_ISCATCHABLEEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BD56EC0)
#define SYSTEM_DATA_COMMON_ADP_ISCATCHABLEORSECURITYEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BD570B0)
#define SYSTEM_DATA_COMMON_ADP_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1BD56DE0)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONASRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1BD56770)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONWITHOUTRETHROW_OFFSET UNITYSDK_OFFSET(0x1BD56910)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BD56630)
#define SYSTEM_DATA_COMMON_ADP_WRONGTYPE_OFFSET UNITYSDK_OFFSET(0x1BD576F0)
#define SYSTEM_DATA_COMMON_ADP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD578D0)

namespace System::Data::Common
{
	inline static constexpr unsigned int ADP_TypeDefinitionIndex = 37117;

	class ADP : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_securityType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27540);
		}
		static ::System::Type** StaticGet_s_accessViolationType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27548);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_AzureSqlServerEndpoints()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27550);
		}
		static ::System::Type** StaticGet_s_stackOverflowType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27558);
		}
		static ::System::Type** StaticGet_s_threadAbortType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27560);
		}
		static ::System::String** StaticGet_StrEmpty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27568);
		}
		static ::System::Type** StaticGet_s_outOfMemoryType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27570);
		}
		static ::System::Type** StaticGet_s_nullReferenceType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x27578);
		}
		static ::System::Boolean* StaticGet_IsPlatformNT5()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x8DB0);
		}
		static ::System::Boolean* StaticGet_IsWindowsNT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x8DB1);
		}
		static ::System::Int32* StaticGet_PtrSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x8DB4);
		}
		static ::System::IntPtr* StaticGet_PtrZero()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x8DB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP__CCTOR_OFFSET))();
		}

		static ::System::Void TraceException(::System::String* trace, ::System::Exception* e)
		{
			return ((::System::Void(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTION_OFFSET))(trace, e);
		}

		static ::System::Void TraceExceptionAsReturnValue(::System::Exception* e)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONASRETURNVALUE_OFFSET))(e);
		}

		static ::System::Void TraceExceptionWithoutRethrow(::System::Exception* e)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONWITHOUTRETHROW_OFFSET))(e);
		}

		static ::System::ArgumentException* Argument(::System::String* error)
		{
			return ((::System::ArgumentException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ARGUMENT_OFFSET))(error);
		}

		static ::System::ArgumentOutOfRangeException* ArgumentOutOfRange(::System::String* parameterName)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_OFFSET))(parameterName);
		}

		static ::System::ArgumentOutOfRangeException* ArgumentOutOfRange_1(::System::String* message, ::System::String* parameterName)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_1_OFFSET))(message, parameterName);
		}

		static ::System::InvalidOperationException* InvalidOperation(::System::String* error)
		{
			return ((::System::InvalidOperationException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDOPERATION_OFFSET))(error);
		}

		static ::System::NotSupportedException* NotSupported(::System::String* error)
		{
			return ((::System::NotSupportedException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_NOTSUPPORTED_OFFSET))(error);
		}

		static ::System::Boolean IsCatchableExceptionType(::System::Exception* e)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ISCATCHABLEEXCEPTIONTYPE_OFFSET))(e);
		}

		static ::System::Boolean IsCatchableOrSecurityExceptionType(::System::Exception* e)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ISCATCHABLEORSECURITYEXCEPTIONTYPE_OFFSET))(e);
		}

		static ::System::ArgumentOutOfRangeException* InvalidEnumerationValue(::System::Type* type, ::System::Int32 value)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDENUMERATIONVALUE_OFFSET))(type, value);
		}

		static ::System::Exception* InvalidSeekOrigin(::System::String* parameterName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDSEEKORIGIN_OFFSET))(parameterName);
		}

		static ::System::ArgumentOutOfRangeException* InvalidAcceptRejectRule(::System::Data::AcceptRejectRule value)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::Data::AcceptRejectRule))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDACCEPTREJECTRULE_OFFSET))(value);
		}

		static ::System::ArgumentOutOfRangeException* InvalidMissingSchemaAction(::System::Data::MissingSchemaAction value)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::Data::MissingSchemaAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDMISSINGSCHEMAACTION_OFFSET))(value);
		}

		static ::System::ArgumentOutOfRangeException* InvalidRule(::System::Data::Rule value)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::Data::Rule))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDRULE_OFFSET))(value);
		}

		static ::System::Exception* WrongType(::System::Type* got, ::System::Type* expected)
		{
			return ((::System::Exception*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_WRONGTYPE_OFFSET))(got, expected);
		}
	};
}
