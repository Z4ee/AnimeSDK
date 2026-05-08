#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_WWWFORM_ADDFIELD_1_OFFSET UNITYSDK_OFFSET(0x1C0EE470)
#define UNITYENGINE_WWWFORM_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x1C0EE390)
#define UNITYENGINE_WWWFORM_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C0EBBE0)
#define UNITYENGINE_WWWFORM_GET_DEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x1C0EE0D0)
#define UNITYENGINE_WWWFORM_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1C0ED810)
#define UNITYENGINE_WWWFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0EE190)

namespace UnityEngine
{
	inline static constexpr unsigned int WWWForm_TypeDefinitionIndex = 6620;

	class WWWForm : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* formData; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* fieldNames; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* fileNames; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* types; // 0x28
		::Il2CppArray<::System::Byte>* boundary; // 0x30
		::System::Boolean containsFiles; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM__CTOR_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_DefaultEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_DEFAULTENCODING_OFFSET))();
		}

		::System::Void AddField(::System::String* fieldName, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDFIELD_OFFSET))(this, fieldName, value);
		}

		::System::Void AddField_1(::System::String* fieldName, ::System::String* value, ::System::Text::Encoding* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDFIELD_1_OFFSET))(this, fieldName, value, e);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_headers()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_HEADERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_DATA_OFFSET))(this);
		}
	};
}
