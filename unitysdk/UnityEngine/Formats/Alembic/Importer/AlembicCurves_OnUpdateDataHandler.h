#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicCurves; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1CB0B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1CB0E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1CAA10)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CB090)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCurves_OnUpdateDataHandler_TypeDefinitionIndex = 40870;

	class AlembicCurves_OnUpdateDataHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Formats::Alembic::Importer::AlembicCurves* curves)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER_INVOKE_OFFSET))(this, curves);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Formats::Alembic::Importer::AlembicCurves* curves, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER_BEGININVOKE_OFFSET))(this, curves, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVES_ONUPDATEDATAHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
