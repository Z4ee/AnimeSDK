#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ExternalException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D3F6370)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D3F6840)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GET_NATIVEERRORCODE_OFFSET UNITYSDK_OFFSET(0x1D3F6830)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_INITIALIZEERRORMESSAGES_OFFSET UNITYSDK_OFFSET(0x1D3F6960)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8E00)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3F6270)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D3F6520)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D3F65C0)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D3F66B0)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D3F67A0)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6130)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Win32Exception_TypeDefinitionIndex = 3014;

	class Win32Exception : public ::System::Runtime::InteropServices::ExternalException
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_ErrorMessage()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Win32Exception_TypeDefinitionIndex)->GetStaticField(0x2DF0);
		}
		static ::System::Boolean* StaticGet_s_ErrorMessagesInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Win32Exception_TypeDefinitionIndex)->GetStaticField(0x11B0);
		}
		::System::Int32 nativeErrorCode; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_1_OFFSET))(this, error);
		}

		::System::Void _ctor_2(::System::Int32 error, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_2_OFFSET))(this, error, message);
		}

		::System::Void _ctor_3(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_3_OFFSET))(this, message);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_4_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CTOR_5_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_NativeErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GET_NATIVEERRORCODE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		static ::System::String* GetErrorMessage(::System::Int32 error)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETERRORMESSAGE_OFFSET))(error);
		}

		static ::System::Void InitializeErrorMessages()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_INITIALIZEERRORMESSAGES_OFFSET))();
		}
	};
}
