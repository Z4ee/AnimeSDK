#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_FTPDATASTREAM_READDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C654150)
#define SYSTEM_NET_FTPDATASTREAM_READDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C654330)
#define SYSTEM_NET_FTPDATASTREAM_READDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C654D70)
#define SYSTEM_NET_FTPDATASTREAM_READDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C654130)

namespace System::Net
{
	inline static constexpr unsigned int FtpDataStream_ReadDelegate_TypeDefinitionIndex = 3513;

	class FtpDataStream_ReadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READDELEGATE_INVOKE_OFFSET))(this, buffer, offset, size);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READDELEGATE_BEGININVOKE_OFFSET))(this, buffer, offset, size, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPDATASTREAM_READDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
