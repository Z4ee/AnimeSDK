#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Data { class DataTableNewRowEventArgs; }

#define SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ED6C130)
#define SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ED6C170)
#define SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ED6BBA0)
#define SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED6BB80)

namespace System::Data
{
	inline static constexpr unsigned int DataTableNewRowEventHandler_TypeDefinitionIndex = 39274;

	class DataTableNewRowEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Data::DataTableNewRowEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Data::DataTableNewRowEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Data::DataTableNewRowEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Data::DataTableNewRowEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
