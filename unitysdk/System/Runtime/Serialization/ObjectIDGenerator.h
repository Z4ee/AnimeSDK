#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x17A196E0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_GETID_OFFSET UNITYSDK_OFFSET(0x17A19790)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_HASID_OFFSET UNITYSDK_OFFSET(0x17A19E20)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_REHASH_OFFSET UNITYSDK_OFFSET(0x17A199F0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A19FA0)
#define SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17A19610)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ObjectIDGenerator_TypeDefinitionIndex = 1100;

	class ObjectIDGenerator : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_sizes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectIDGenerator_TypeDefinitionIndex)->GetStaticField(0x8A00);
		}
		::Il2CppArray<::System::Object*>* m_objs; // 0x10
		::Il2CppArray<::System::Int64>* m_ids; // 0x18
		::System::Int32 m_currentSize; // 0x20
		::System::Int32 m_currentCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR__CCTOR_OFFSET))();
		}

		::System::Int32 FindElement(::System::Object* obj, ::System::Boolean& found)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_FINDELEMENT_OFFSET))(this, obj, found);
		}

		::System::Int64 GetId(::System::Object* obj, ::System::Boolean& firstTime)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_GETID_OFFSET))(this, obj, firstTime);
		}

		::System::Int64 HasId(::System::Object* obj, ::System::Boolean& firstTime)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_HASID_OFFSET))(this, obj, firstTime);
		}

		::System::Void Rehash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_OBJECTIDGENERATOR_REHASH_OFFSET))(this);
		}
	};
}
