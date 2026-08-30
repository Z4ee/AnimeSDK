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

#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C453620)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATORHELPER_OFFSET UNITYSDK_OFFSET(0x1C4539C0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4539B0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1C454A40)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1C453B00)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1C454A30)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C454A00)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1C453AD0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_RESOLVERESOURCELOCATOR_OFFSET UNITYSDK_OFFSET(0x1C454A50)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C453AC0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C445BB0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C442C50)

namespace System::Resources
{
	inline static constexpr unsigned int RuntimeResourceSet_TypeDefinitionIndex = 534;

	class RuntimeResourceSet : public ::System::Resources::ResourceSet
	{
	public:
		// static const ::System::Int32 Version = 0x2; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* _resCache; // 0x28
		::System::Resources::ResourceReader* _defaultReader; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* _caseInsensitiveTable; // 0x38
		::System::Boolean _haveReadFromReader; // 0x40

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_DISPOSE_OFFSET))(this, a1);
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

		::System::String* GetString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET))(this, a1);
		}

		::System::String* GetString_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetObject(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET))(this, a1);
		}

		::System::Object* GetObject_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetObject_2(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ResolveResourceLocator(::System::Resources::ResourceLocator a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* a3, ::System::Boolean a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Resources::ResourceLocator, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_RESOLVERESOURCELOCATOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
