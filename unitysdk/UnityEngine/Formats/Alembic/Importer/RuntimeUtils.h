#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x1B0414D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_CREATEGAMEOBJECTWITHUNDO_OFFSET UNITYSDK_OFFSET(0x1B0357A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DEPTHFIRSTVISITOR_OFFSET UNITYSDK_OFFSET(0x1B03F860)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DESTROYUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1B035F40)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int RuntimeUtils_TypeDefinitionIndex = 41708;

	class RuntimeUtils : public ::System::Object
	{
	public:
		static ::System::UInt64 CombineHash(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_COMBINEHASH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* CreateGameObjectWithUndo(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_CREATEGAMEOBJECTWITHUNDO_OFFSET))(a1);
		}

		static ::System::Void DestroyUnityObject(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DESTROYUNITYOBJECT_OFFSET))(a1);
		}

		static ::System::Void DepthFirstVisitor(::UnityEngine::GameObject* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DEPTHFIRSTVISITOR_OFFSET))(a1, a2);
		}
	};
}
