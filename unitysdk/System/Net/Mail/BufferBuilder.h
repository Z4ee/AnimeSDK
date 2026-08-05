#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1D623020)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x1D623040)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_3_OFFSET UNITYSDK_OFFSET(0x1D623100)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_4_OFFSET UNITYSDK_OFFSET(0x1D623120)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_5_OFFSET UNITYSDK_OFFSET(0x1D623150)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_6_OFFSET UNITYSDK_OFFSET(0x1D623340)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x1D622F50)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_ENSUREBUFFER_OFFSET UNITYSDK_OFFSET(0x1D622EC0)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1D6235C0)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D6235B0)
#define SYSTEM_NET_MAIL_BUFFERBUILDER_RESET_OFFSET UNITYSDK_OFFSET(0x1D6235D0)
#define SYSTEM_NET_MAIL_BUFFERBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D622E80)
#define SYSTEM_NET_MAIL_BUFFERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D622E40)

namespace System::Net::Mail
{
	inline static constexpr unsigned int BufferBuilder_TypeDefinitionIndex = 3574;

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
