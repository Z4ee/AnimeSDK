#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ADB6E90)
#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ADB6F30)
#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADB68F0)
#define SYSTEM_IO_FILESTREAM_WRITEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB68D0)

namespace System::IO
{
	inline static constexpr unsigned int FileStream_WriteDelegate_TypeDefinitionIndex = 682;

	class FileStream_WriteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE_INVOKE_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE_BEGININVOKE_OFFSET))(this, buffer, offset, count, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
