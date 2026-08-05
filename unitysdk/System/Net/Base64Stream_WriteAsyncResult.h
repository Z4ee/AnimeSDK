#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/LazyAsyncResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class Base64Stream; }

#define SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_COMPLETEWRITE_OFFSET UNITYSDK_OFFSET(0x1D620320)
#define SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_END_OFFSET UNITYSDK_OFFSET(0x1D620610)
#define SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_ONWRITE_OFFSET UNITYSDK_OFFSET(0x1D620390)
#define SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_WRITE_OFFSET UNITYSDK_OFFSET(0x1D6200E0)
#define SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D620680)
#define SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D620040)

namespace System::Net
{
	inline static constexpr unsigned int Base64Stream_WriteAsyncResult_TypeDefinitionIndex = 3434;

	class Base64Stream_WriteAsyncResult : public ::System::Net::LazyAsyncResult
	{
	public:
		static ::System::AsyncCallback** StaticGet_onWrite()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Base64Stream_WriteAsyncResult_TypeDefinitionIndex)->GetStaticField(0x35A0);
		}
		::System::Net::Base64Stream* parent; // 0x48
		::Il2CppArray<::System::Byte>* buffer; // 0x50
		::System::Int32 offset; // 0x58
		::System::Int32 count; // 0x5C
		::System::Int32 written; // 0x60

		::System::Void _ctor(::System::Net::Base64Stream* parent, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Base64Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT__CTOR_OFFSET))(this, parent, buffer, offset, count, callback, state);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT__CCTOR_OFFSET))();
		}

		::System::Void Write()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_WRITE_OFFSET))(this);
		}

		::System::Void CompleteWrite(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_COMPLETEWRITE_OFFSET))(this, result);
		}

		static ::System::Void OnWrite(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_ONWRITE_OFFSET))(result);
		}

		static ::System::Void End(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASE64STREAM_WRITEASYNCRESULT_END_OFFSET))(result);
		}
	};
}
