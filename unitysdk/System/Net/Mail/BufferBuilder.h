#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x19E35800)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x19E35820)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_3_OFFSET UNITYSDK_OFFSET(0x19E358E0)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_4_OFFSET UNITYSDK_OFFSET(0x19E35900)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_5_OFFSET UNITYSDK_OFFSET(0x19E35930)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_6_OFFSET UNITYSDK_OFFSET(0x19E35B10)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x19E35730)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x19E356A0)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x19E35D50)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19E35D40)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_RESET_OFFSET UNITYSDK_OFFSET(0x19E35D60)
#define SYSTEM_NET_MAIL_BUFFERBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E35660)
#define SYSTEM_NET_MAIL_BUFFERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E35620)

namespace System::Net::Mail
{
	inline static constexpr unsigned int BufferBuilder_TypeDefinitionIndex = 3575;

	class BufferBuilder : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Int32 offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 initialSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER__CTOR_1_OFFSET))(this, initialSize);
		}

		::System::Void EnsureBuffer(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_ENSUREBUFFER_OFFSET))(this, count);
		}

		::System::Void Append(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_OFFSET))(this, value);
		}

		::System::Void Append_1(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_1_OFFSET))(this, value);
		}

		::System::Void Append_2(::Il2CppArray<::System::Byte>* value, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_2_OFFSET))(this, value, offset, count);
		}

		::System::Void Append_3(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_3_OFFSET))(this, value);
		}

		::System::Void Append_4(::System::String* value, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_4_OFFSET))(this, value, allowUnicode);
		}

		::System::Void Append_5(::System::String* value, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_5_OFFSET))(this, value, offset, count, allowUnicode);
		}

		::System::Void Append_6(::System::String* value, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_6_OFFSET))(this, value, offset, count);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_GET_LENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_GETBUFFER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_BUFFERBUILDER_RESET_OFFSET))(this);
		}
	};
}
