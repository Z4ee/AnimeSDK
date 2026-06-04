#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18654000)
#define SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x18653D60)
#define SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x18653D80)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186528A0)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18653EC0)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18653F60)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18653540)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18653CF0)

namespace System
{
	inline static constexpr unsigned int TypeLoadException_TypeDefinitionIndex = 352;

	class TypeLoadException : public ::System::SystemException
	{
	public:
		::System::String* ClassName; // 0x88
		::System::String* MessageArg; // 0x90
		::System::String* AssemblyName; // 0x98
		::System::Int32 ResourceId; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
