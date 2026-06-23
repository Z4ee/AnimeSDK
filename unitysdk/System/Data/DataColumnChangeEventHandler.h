#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Data { class DataColumnChangeEventArgs; }

#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D6D3E20)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D6D3E60)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D6D38A0)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D3880)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnChangeEventHandler_TypeDefinitionIndex = 38569;

	class DataColumnChangeEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Data::DataColumnChangeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Data::DataColumnChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Data::DataColumnChangeEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Data::DataColumnChangeEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
