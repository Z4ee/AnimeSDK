#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EABE800)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EABE830)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EABE600)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EABE790)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorderSettings_GetTargetBranch_TypeDefinitionIndex = 44619;

	class AlembicRecorderSettings_GetTargetBranch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* Invoke()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDERSETTINGS_GETTARGETBRANCH_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
