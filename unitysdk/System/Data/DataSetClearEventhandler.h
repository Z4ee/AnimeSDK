#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATASETCLEAREVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D8A0920)
#define SYSTEM_DATA_DATASETCLEAREVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D8A0960)
#define SYSTEM_DATA_DATASETCLEAREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D8A03A0)
#define SYSTEM_DATA_DATASETCLEAREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A0380)

namespace System::Data
{
	inline static constexpr unsigned int DataSetClearEventhandler_TypeDefinitionIndex = 38599;

	class DataSetClearEventhandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASETCLEAREVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASETCLEAREVENTHANDLER_INVOKE_OFFSET))(this, sender, table);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Data::DataTable* table, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Data::DataTable*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASETCLEAREVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, table, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASETCLEAREVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
