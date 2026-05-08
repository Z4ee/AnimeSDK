#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Data { class DataRowChangeEventArgs; }

#define SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x195AD7F0)
#define SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x195AD830)
#define SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x195AD270)
#define SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195AD260)

namespace System::Data
{
	inline static constexpr unsigned int DataRowChangeEventHandler_TypeDefinitionIndex = 36978;

	class DataRowChangeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Data::DataRowChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Data::DataRowChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Data::DataRowChangeEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Data::DataRowChangeEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
