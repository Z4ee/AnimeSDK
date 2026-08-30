#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicElement; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStream; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EAAC050)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_FINDNODE_OFFSET UNITYSDK_OFFSET(0x1EAB01C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_ABCOBJECT_OFFSET UNITYSDK_OFFSET(0x1EAB1440)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1EAB1460)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EAB1420)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x1EAB1400)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_REMOVEALEMBICOBJECT_OFFSET UNITYSDK_OFFSET(0x1EAA1C80)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_RESETTREE_OFFSET UNITYSDK_OFFSET(0x1EAB1470)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_ABCOBJECT_OFFSET UNITYSDK_OFFSET(0x1EAB1450)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EAB1430)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x1EAB1410)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_VISITRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1EAB15D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAA4A0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicTreeNode_TypeDefinitionIndex = 44735;

	class AlembicTreeNode : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _gameObject_k__BackingField; // 0x10
		::UnityEngine::Formats::Alembic::Importer::AlembicStream* _stream_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*>* children; // 0x20
		::UnityEngine::Formats::Alembic::Importer::AlembicElement* _abcObject_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicStream* get_stream()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_stream(::UnityEngine::Formats::Alembic::Importer::AlembicStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicStream*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_STREAM_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicElement* get_abcObject()
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_ABCOBJECT_OFFSET))(this);
		}

		::System::Void set_abcObject(::UnityEngine::Formats::Alembic::Importer::AlembicElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_SET_ABCOBJECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_RESETTREE_OFFSET))(this);
		}

		::System::Void RemoveAlembicObject(::UnityEngine::Formats::Alembic::Importer::AlembicElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_REMOVEALEMBICOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* FindNode(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_FINDNODE_OFFSET))(this, a1);
		}

		::System::Void VisitRecursively(::System::Action_1<::UnityEngine::Formats::Alembic::Importer::AlembicElement*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Formats::Alembic::Importer::AlembicElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICTREENODE_VISITRECURSIVELY_OFFSET))(this, a1);
		}
	};
}
