#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/LazyAsyncResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class Base64Stream; }

#define SYSTEM_NET_BASE64STREAM_READASYNCRESULT_COMPLETEREAD_OFFSET UNITYSDK_OFFSET(0x1D3FB550)
#define SYSTEM_NET_BASE64STREAM_READASYNCRESULT_END_OFFSET UNITYSDK_OFFSET(0x1D3FB9B0)
#define SYSTEM_NET_BASE64STREAM_READASYNCRESULT_ONREAD_OFFSET UNITYSDK_OFFSET(0x1D3FB770)
#define SYSTEM_NET_BASE64STREAM_READASYNCRESULT_READ_OFFSET UNITYSDK_OFFSET(0x1D3FB5D0)
#define SYSTEM_NET_BASE64STREAM_READASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3FBA30)
#define SYSTEM_NET_BASE64STREAM_READASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB4B0)

namespace System::Net
{
	inline static constexpr unsigned int Base64Stream_ReadAsyncResult_TypeDefinitionIndex = 3433;

	class Base64Stream_ReadAsyncResult : public ::System::Net::LazyAsyncResult
	{
	public:
		static ::System::AsyncCallback** StaticGet_onRead()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Base64Stream_ReadAsyncResult_TypeDefinitionIndex)->GetStaticField(0x2E10);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x48
		::System::Net::Base64Stream* parent; // 0x50
		::System::Int32 count; // 0x58
		::System::Int32 offset; // 0x5C
		::System::Int32 read; // 0x60

		::System::Void _ctor(::System::Net::Base64Stream* parent, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Base64Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READASYNCRESULT__CTOR_OFFSET))(this, parent, buffer, offset, count, callback, state);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READASYNCRESULT__CCTOR_OFFSET))();
		}

		::System::Boolean CompleteRead(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READASYNCRESULT_COMPLETEREAD_OFFSET))(this, result);
		}

		::System::Void Read()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READASYNCRESULT_READ_OFFSET))(this);
		}

		static ::System::Void OnRead(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READASYNCRESULT_ONREAD_OFFSET))(result);
		}

		static ::System::Int32 End(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_READASYNCRESULT_END_OFFSET))(result);
		}
	};
}
