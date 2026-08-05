#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/SimpleAsyncResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }

#define SYSTEM_NET_WEBASYNCRESULT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D6293E0)
#define SYSTEM_NET_WEBASYNCRESULT_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1D629460)
#define SYSTEM_NET_WEBASYNCRESULT_GET_INNERASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1D629420)
#define SYSTEM_NET_WEBASYNCRESULT_GET_NBYTES_OFFSET UNITYSDK_OFFSET(0x1D629400)
#define SYSTEM_NET_WEBASYNCRESULT_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D629470)
#define SYSTEM_NET_WEBASYNCRESULT_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1D629450)
#define SYSTEM_NET_WEBASYNCRESULT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D629480)
#define SYSTEM_NET_WEBASYNCRESULT_GET_WRITESTREAM_OFFSET UNITYSDK_OFFSET(0x1D629440)
#define SYSTEM_NET_WEBASYNCRESULT_RESET_OFFSET UNITYSDK_OFFSET(0x1D629380)
#define SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_1_OFFSET UNITYSDK_OFFSET(0x1D6293C0)
#define SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_2_OFFSET UNITYSDK_OFFSET(0x1D6293D0)
#define SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D6293B0)
#define SYSTEM_NET_WEBASYNCRESULT_SET_INNERASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x1D629430)
#define SYSTEM_NET_WEBASYNCRESULT_SET_NBYTES_OFFSET UNITYSDK_OFFSET(0x1D629410)
#define SYSTEM_NET_WEBASYNCRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D629210)
#define SYSTEM_NET_WEBASYNCRESULT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D6292B0)
#define SYSTEM_NET_WEBASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D629170)

namespace System::Net
{
	inline static constexpr unsigned int WebAsyncResult_TypeDefinitionIndex = 3562;

	class WebAsyncResult : public ::System::Net::SimpleAsyncResult
	{
	public:
		::System::IO::Stream* writeStream; // 0x40
		::Il2CppArray<::System::Byte>* buffer; // 0x48
		::System::IAsyncResult* innerAsyncResult; // 0x50
		::System::Net::HttpWebResponse* response; // 0x58
		::System::Net::HttpWebRequest* AsyncObject; // 0x60
		::System::Int32 size; // 0x68
		::System::Boolean EndCalled; // 0x6C
		::System::Boolean AsyncWriteAll; // 0x6D
		::System::Int32 nbytes; // 0x70
		::System::Int32 offset; // 0x74

		::System::Void _ctor(::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT__CTOR_OFFSET))(this, cb, state);
		}

		::System::Void _ctor_1(::System::Net::HttpWebRequest* request, ::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT__CTOR_1_OFFSET))(this, request, cb, state);
		}

		::System::Void _ctor_2(::System::AsyncCallback* cb, ::System::Object* state, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT__CTOR_2_OFFSET))(this, cb, state, buffer, offset, size);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_RESET_OFFSET))(this);
		}

		::System::Void SetCompleted(::System::Boolean synch, ::System::Int32 nbytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_OFFSET))(this, synch, nbytes);
		}

		::System::Void SetCompleted_1(::System::Boolean synch, ::System::IO::Stream* writeStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_1_OFFSET))(this, synch, writeStream);
		}

		::System::Void SetCompleted_2(::System::Boolean synch, ::System::Net::HttpWebResponse* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Net::HttpWebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SETCOMPLETED_2_OFFSET))(this, synch, response);
		}

		::System::Void DoCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_DOCALLBACK_OFFSET))(this);
		}

		::System::Int32 get_NBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_NBYTES_OFFSET))(this);
		}

		::System::Void set_NBytes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SET_NBYTES_OFFSET))(this, value);
		}

		::System::IAsyncResult* get_InnerAsyncResult()
		{
			return ((::System::IAsyncResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_GET_INNERASYNCRESULT_OFFSET))(this);
		}

		::System::Void set_InnerAsyncResult(::System::IAsyncResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBASYNCRESULT_SET_INNERASYNCRESULT_OFFSET))(this, value);
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
