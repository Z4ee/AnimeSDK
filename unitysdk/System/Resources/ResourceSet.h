#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Resources { class IResourceReader; }

#define SYSTEM_RESOURCES_RESOURCESET_COMMONINIT_OFFSET UNITYSDK_OFFSET(0x179BB6E0)
#define SYSTEM_RESOURCES_RESOURCESET_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x179B5950)
#define SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179BB750)
#define SYSTEM_RESOURCES_RESOURCESET_GETCASEINSENSITIVEOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x179BBD90)
#define SYSTEM_RESOURCES_RESOURCESET_GETENUMERATORHELPER_OFFSET UNITYSDK_OFFSET(0x179BB850)
#define SYSTEM_RESOURCES_RESOURCESET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x179BB7D0)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x179BBA90)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_1_OFFSET UNITYSDK_OFFSET(0x179BC100)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x179BC0F0)
#define SYSTEM_RESOURCES_RESOURCESET_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x179BBB50)
#define SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x179BB950)
#define SYSTEM_RESOURCES_RESOURCESET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x179BB8D0)
#define SYSTEM_RESOURCES_RESOURCESET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179BB740)
#define SYSTEM_RESOURCES_RESOURCESET__CTOR_OFFSET UNITYSDK_OFFSET(0x179BB680)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceSet_TypeDefinitionIndex = 530;

	class ResourceSet : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* _caseInsensitiveTable; // 0x10
		::System::Resources::IResourceReader* Reader; // 0x18
		::System::Collections::Hashtable* Table; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean junk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET__CTOR_1_OFFSET))(this, junk);
		}

		::System::Void CommonInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_COMMONINIT_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET))(this, disposing);
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

		::System::String* GetString(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET))(this, name);
		}

		::System::String* GetString_1(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETSTRING_1_OFFSET))(this, name, ignoreCase);
		}

		::System::Object* GetObject(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET))(this, name);
		}

		::System::Object* GetObject_1(::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_1_OFFSET))(this, name, ignoreCase);
		}

		::System::Object* GetObjectInternal(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECTINTERNAL_OFFSET))(this, name);
		}

		::System::Object* GetCaseInsensitiveObjectInternal(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETCASEINSENSITIVEOBJECTINTERNAL_OFFSET))(this, name);
		}
	};
}
