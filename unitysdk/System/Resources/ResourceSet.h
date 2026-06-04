#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Resources { class IResourceReader; }

#define SYSTEM_RESOURCES_RESOURCESET_COMMONINIT_OFFSET UNITYSDK_OFFSET(0x1876C200)
#define SYSTEM_RESOURCES_RESOURCESET_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x187665C0)
#define SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1876C270)
#define SYSTEM_RESOURCES_RESOURCESET_GETCASEINSENSITIVEOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1876C8B0)
#define SYSTEM_RESOURCES_RESOURCESET_GETENUMERATORHELPER_OFFSET UNITYSDK_OFFSET(0x1876C370)
#define SYSTEM_RESOURCES_RESOURCESET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1876C2F0)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1876C5B0)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1876CC20)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1876CC10)
#define SYSTEM_RESOURCES_RESOURCESET_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1876C670)
#define SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1876C470)
#define SYSTEM_RESOURCES_RESOURCESET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1876C3F0)
#define SYSTEM_RESOURCES_RESOURCESET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1876C260)
#define SYSTEM_RESOURCES_RESOURCESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1876C1A0)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceSet_TypeDefinitionIndex = 529;

	class ResourceSet : public ::System::Object
	{
	public:
		::System::Resources::IResourceReader* Reader; // 0x10
		::System::Collections::Hashtable* Table; // 0x18
		::System::Collections::Hashtable* _caseInsensitiveTable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void CommonInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_COMMONINIT_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_DISPOSE_1_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETENUMERATORHELPER_OFFSET))(this);
		}

		::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET))(this, a1);
		}

		::System::String* GetString_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetObject(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET))(this, a1);
		}

		::System::Object* GetObject_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetObjectInternal(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECTINTERNAL_OFFSET))(this, a1);
		}

		::System::Object* GetCaseInsensitiveObjectInternal(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETCASEINSENSITIVEOBJECTINTERNAL_OFFSET))(this, a1);
		}
	};
}
