#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Resources/ResourceLocator.h"
#include "unitysdk/System/Resources/ResourceSet.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class Stream; }
namespace System::Resources { class ResourceReader; }

#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3250B0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATORHELPER_OFFSET UNITYSDK_OFFSET(0x1C325300)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C3252F0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1C325440)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1C325410)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_RESOLVERESOURCELOCATOR_OFFSET UNITYSDK_OFFSET(0x1C325F30)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C325400)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C324FA0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C324E40)

namespace System::Resources
{
	inline static constexpr unsigned int RuntimeResourceSet_TypeDefinitionIndex = 519;

	class RuntimeResourceSet : public ::System::Resources::ResourceSet
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* _resCache; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* _caseInsensitiveTable; // 0x30
		::System::Resources::ResourceReader* _defaultReader; // 0x38
		::System::Boolean _haveReadFromReader; // 0x40

		::System::Void _ctor(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_OFFSET))(this, fileName);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_1_OFFSET))(this, stream);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATORHELPER_OFFSET))(this);
		}

		::System::String* GetString(::System::String* key, ::System::Boolean ignoreCase)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET))(this, key, ignoreCase);
		}

		::System::Object* GetObject(::System::String* key, ::System::Boolean ignoreCase, ::System::Boolean isString)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET))(this, key, ignoreCase, isString);
		}

		::System::Object* ResolveResourceLocator(::System::Resources::ResourceLocator resLocation, ::System::String* key, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* copyOfCache, ::System::Boolean keyInWrongCase)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Resources::ResourceLocator, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_RESOLVERESOURCELOCATOR_OFFSET))(this, resLocation, key, copyOfCache, keyInWrongCase);
		}
	};
}
