#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/SimpleAsyncResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }

#define SYSTEM_NET_WEBASYNCRESULT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AFBA1A0)
#define SYSTEM_NET_WEBASYNCRESULT_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1AFBA230)
#define SYSTEM_NET_WEBASYNCRESULT_GET_INNERASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1AFBA1F0)
#define SYSTEM_NET_WEBASYNCRESULT_GET_NBYTES_OFFSET UNITYSDK_OFFSET(0x1AFBA1D0)
#define SYSTEM_NET_WEBASYNCRESULT_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1AFBA240)
#define SYSTEM_NET_WEBASYNCRESULT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1AFBA220)
#define SYSTEM_NET_WEBASYNCRESULT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1AFBA250)
#define SYSTEM_NET_WEBASYNCRESULT_GET_WRITESTREAM_OFFSET UNITYSDK_OFFSET(0x1AFBA210)
#define SYSTEM_NET_WEBASYNCRESULT_RESET_OFFSET UNITYSDK_OFFSET(0x1AFB9D80)
#define SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_1_OFFSET UNITYSDK_OFFSET(0x1AFB9FA0)
#define SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_2_OFFSET UNITYSDK_OFFSET(0x1AFBA0A0)
#define SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AFB9EA0)
#define SYSTEM_NET_WEBASYNCRESULT_SET_INNERASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1AFBA200)
#define SYSTEM_NET_WEBASYNCRESULT_SET_NBYTES_OFFSET UNITYSDK_OFFSET(0x1AFBA1E0)
#define SYSTEM_NET_WEBASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFB9C20)
#define SYSTEM_NET_WEBASYNCRESULT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFB9CC0)
#define SYSTEM_NET_WEBASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB9B90)

namespace System::Net
{
	inline static constexpr unsigned int WebAsyncResult_TypeDefinitionIndex = 2869;

	class WebAsyncResult : public ::System::Net::SimpleAsyncResult
	{
	public:
		::System::IO::Stream* writeStream; // 0x40
		::Il2CppArray<::System::Byte>* buffer; // 0x48
		::System::IAsyncResult* innerAsyncResult; // 0x50
		::System::Net::HttpWebRequest* AsyncObject; // 0x58
		::System::Net::HttpWebResponse* response; // 0x60
		::System::Int32 nbytes; // 0x68
		::System::Boolean EndCalled; // 0x6C
		::System::Boolean AsyncWriteAll; // 0x6D
		::System::Int32 size; // 0x70
		::System::Int32 offset; // 0x74

		::System::Void _ctor(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Net::HttpWebRequest* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::AsyncCallback* a1, ::System::Object* a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_RESET_OFFSET))(this);
		}

		::System::Void SetCompleted(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void SetCompleted_1(::System::Boolean a1, ::System::IO::Stream* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetCompleted_2(::System::Boolean a1, ::System::Net::HttpWebResponse* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Net::HttpWebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_2_OFFSET))(this, a1, a2);
		}

		::System::Void DoCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_DOCALLBACK_OFFSET))(this);
		}

		::System::Int32 get_NBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_NBYTES_OFFSET))(this);
		}

		::System::Void set_NBytes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SET_NBYTES_OFFSET))(this, a1);
		}

		::System::IAsyncResult* get_InnerAsyncResult()
		{
			return ((::System::IAsyncResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_INNERASYNCRESULT_OFFSET))(this);
		}

		::System::Void set_InnerAsyncResult(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SET_INNERASYNCRESULT_OFFSET))(this, a1);
		}

		::System::IO::Stream* get_WriteStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_WRITESTREAM_OFFSET))(this);
		}

		::System::Net::HttpWebResponse* get_Response()
		{
			return ((::System::Net::HttpWebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_RESPONSE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_BUFFER_OFFSET))(this);
		}

		::System::Int32 get_Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_OFFSET_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_SIZE_OFFSET))(this);
		}
	};
}
