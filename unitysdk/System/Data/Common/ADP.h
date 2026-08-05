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

#define SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_1_OFFSET UNITYSDK_OFFSET(0x1F4AB460)
#define SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1F4AB3F0)
#define SYSTEM_DATA_COMMON_ADP_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x1F4AB310)
#define SYSTEM_DATA_COMMON_ADP_INVALIDACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x1F4ABDD0)
#define SYSTEM_DATA_COMMON_ADP_INVALIDENUMERATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1F4ABA90)
#define SYSTEM_DATA_COMMON_ADP_INVALIDMISSINGSCHEMAACTION_OFFSET UNITYSDK_OFFSET(0x1F4ABE50)
#define SYSTEM_DATA_COMMON_ADP_INVALIDOPERATION_OFFSET UNITYSDK_OFFSET(0x1F4AB560)
#define SYSTEM_DATA_COMMON_ADP_INVALIDRULE_OFFSET UNITYSDK_OFFSET(0x1F4ABED0)
#define SYSTEM_DATA_COMMON_ADP_INVALIDSEEKORIGIN_OFFSET UNITYSDK_OFFSET(0x1F4ABC70)
#define SYSTEM_DATA_COMMON_ADP_ISCATCHABLEEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1F4AB720)
#define SYSTEM_DATA_COMMON_ADP_ISCATCHABLEORSECURITYEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1F4AB910)
#define SYSTEM_DATA_COMMON_ADP_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1F4AB640)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONASRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1F4AAFD0)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONWITHOUTRETHROW_OFFSET UNITYSDK_OFFSET(0x1F4AB170)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F4AAE90)
#define SYSTEM_DATA_COMMON_ADP_WRONGTYPE_OFFSET UNITYSDK_OFFSET(0x1F4ABF50)
#define SYSTEM_DATA_COMMON_ADP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4AC130)

namespace System::Data::Common
{
	inline static constexpr unsigned int ADP_TypeDefinitionIndex = 39395;

	class ADP : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_securityType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB10);
		}
		static ::System::Type** StaticGet_s_outOfMemoryType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB18);
		}
		static ::System::Type** StaticGet_s_stackOverflowType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB20);
		}
		static ::System::String** StaticGet_StrEmpty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_AzureSqlServerEndpoints()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB30);
		}
		static ::System::Type** StaticGet_s_accessViolationType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB38);
		}
		static ::System::Type** StaticGet_s_threadAbortType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB40);
		}
		static ::System::Type** StaticGet_s_nullReferenceType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x2AB48);
		}
		static ::System::Int32* StaticGet_PtrSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x9360);
		}
		static ::System::Boolean* StaticGet_IsWindowsNT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x9364);
		}
		static ::System::Boolean* StaticGet_IsPlatformNT5()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x9365);
		}
		static ::System::IntPtr* StaticGet_PtrZero()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(ADP_TypeDefinitionIndex)->GetStaticField(0x9368);
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
