#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A10EB60)
#define SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A10ED00)
#define SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A10F670)
#define SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10EB40)

namespace System::Net
{
	inline static constexpr unsigned int FtpDataStream_WriteDelegate_TypeDefinitionIndex = 2828;

	class FtpDataStream_WriteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE_INVOKE_OFFSET))(this, buffer, offset, size);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE_BEGININVOKE_OFFSET))(this, buffer, offset, size, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_WRITEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
