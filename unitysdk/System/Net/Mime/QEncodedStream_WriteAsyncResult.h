#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/LazyAsyncResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net::Mime { class QEncodedStream; }

#define SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_COMPLETEWRITE_OFFSET UNITYSDK_OFFSET(0x1A32BBE0)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_END_OFFSET UNITYSDK_OFFSET(0x1A32BC40)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_ONWRITE_OFFSET UNITYSDK_OFFSET(0x1A32BCB0)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_WRITE_OFFSET UNITYSDK_OFFSET(0x1A32BF00)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A32C170)
#define SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32BB30)

namespace System::Net::Mime
{
	inline static constexpr unsigned int QEncodedStream_WriteAsyncResult_TypeDefinitionIndex = 3630;

	class QEncodedStream_WriteAsyncResult : public ::System::Net::LazyAsyncResult
	{
	public:
		static ::System::AsyncCallback** StaticGet_onWrite()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(QEncodedStream_WriteAsyncResult_TypeDefinitionIndex)->GetStaticField(0x3250);
		}
		::System::Net::Mime::QEncodedStream* parent; // 0x48
		::Il2CppArray<::System::Byte>* buffer; // 0x50
		::System::Int32 count; // 0x58
		::System::Int32 written; // 0x5C
		::System::Int32 offset; // 0x60

		::System::Void _ctor(::System::Net::Mime::QEncodedStream* parent, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mime::QEncodedStream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT__CTOR_OFFSET))(this, parent, buffer, offset, count, callback, state);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT__CCTOR_OFFSET))();
		}

		::System::Void CompleteWrite(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_COMPLETEWRITE_OFFSET))(this, result);
		}

		static ::System::Void End(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_END_OFFSET))(result);
		}

		static ::System::Void OnWrite(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_ONWRITE_OFFSET))(result);
		}

		::System::Void Write()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QENCODEDSTREAM_WRITEASYNCRESULT_WRITE_OFFSET))(this);
		}
	};
}
