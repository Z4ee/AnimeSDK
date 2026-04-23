#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x1A1DCDC0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_CREATEGAMEOBJECTWITHUNDO_OFFSET UNITYSDK_OFFSET(0x1A1D1280)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DEPTHFIRSTVISITOR_OFFSET UNITYSDK_OFFSET(0x1A1DB0C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DESTROYUNITYOBJECT_OFFSET UNITYSDK_OFFSET(0x1A1D1A10)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int RuntimeUtils_TypeDefinitionIndex = 40882;

	class RuntimeUtils : public ::System::Object
	{
	public:
		static ::System::UInt64 CombineHash(::System::UInt64 h1, ::System::UInt64 h2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_COMBINEHASH_OFFSET))(h1, h2);
		}

		static ::UnityEngine::GameObject* CreateGameObjectWithUndo(::System::String* message)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_CREATEGAMEOBJECTWITHUNDO_OFFSET))(message);
		}

		static ::System::Void DestroyUnityObject(::UnityEngine::Object* o)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DESTROYUNITYOBJECT_OFFSET))(o);
		}

		static ::System::Void DepthFirstVisitor(::UnityEngine::GameObject* root, ::System::Action_1<::UnityEngine::GameObject*>* lambda)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_RUNTIMEUTILS_DEPTHFIRSTVISITOR_OFFSET))(root, lambda);
		}
	};
}
