#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYOEMOTION_UNIQUESTRING_CLEAR_OFFSET UNITYSDK_OFFSET(0x197A1310)
#define MIHOYOEMOTION_UNIQUESTRING_INTERNSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x197A14B0)
#define MIHOYOEMOTION_UNIQUESTRING_INTERNSTRINGLIST_OFFSET UNITYSDK_OFFSET(0x197A1590)
#define MIHOYOEMOTION_UNIQUESTRING_INTERNSTRING_OFFSET UNITYSDK_OFFSET(0x197A1420)
#define MIHOYOEMOTION_UNIQUESTRING_INTERN_OFFSET UNITYSDK_OFFSET(0x197A1000)
#define MIHOYOEMOTION_UNIQUESTRING_ISINTERNED_OFFSET UNITYSDK_OFFSET(0x197A1190)
#define MIHOYOEMOTION_UNIQUESTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A16A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int UniqueString_TypeDefinitionIndex = 37780;

	class UniqueString : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_m_strings()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UniqueString_TypeDefinitionIndex)->GetStaticField(0x29330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_UNIQUESTRING__CCTOR_OFFSET))();
		}

		static ::System::String* Intern(::System::String* str, ::System::Boolean removable)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_UNIQUESTRING_INTERN_OFFSET))(str, removable);
		}

		static ::System::String* IsInterned(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_UNIQUESTRING_ISINTERNED_OFFSET))(str);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_UNIQUESTRING_CLEAR_OFFSET))();
		}

		static ::System::Void InternString(::System::String*& str)
		{
			return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_UNIQUESTRING_INTERNSTRING_OFFSET))(str);
		}

		static ::System::Void InternStringArray(::Il2CppArray<::System::String*>* array)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_UNIQUESTRING_INTERNSTRINGARRAY_OFFSET))(array);
		}

		static ::System::Void InternStringList(::System::Collections::Generic::List_1<::System::String*>* array)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_UNIQUESTRING_INTERNSTRINGLIST_OFFSET))(array);
		}
	};
}
