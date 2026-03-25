#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TMPRO_TMPRO_EXTENSIONMETHODS_ARRAYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1896F940)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_1_OFFSET UNITYSDK_OFFSET(0x1896FEF0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET UNITYSDK_OFFSET(0x1896FE80)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1896FEB0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x18970100)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_3_OFFSET UNITYSDK_OFFSET(0x18970160)
#define TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET UNITYSDK_OFFSET(0x18948820)
#define TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1896FD00)
#define TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1896FA30)
#define TMPRO_TMPRO_EXTENSIONMETHODS_MINALPHA_OFFSET UNITYSDK_OFFSET(0x1895C680)
#define TMPRO_TMPRO_EXTENSIONMETHODS_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1895D850)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TINT_1_OFFSET UNITYSDK_OFFSET(0x1896FFF0)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET UNITYSDK_OFFSET(0x1896FF20)
#define TMPRO_TMPRO_EXTENSIONMETHODS_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x1896F880)
#define TMPRO_TMPRO_EXTENSIONMETHODS_UINTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1896FBD0)

namespace TMPro
{
	inline static constexpr unsigned int TMPro_ExtensionMethods_TypeDefinitionIndex = 34414;

	class TMPro_ExtensionMethods : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>* ToIntArray(::System::String* text)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TOINTARRAY_OFFSET))(text);
		}

		static ::System::String* ArrayToString(::Il2CppArray<::System::Char>* chars)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_ARRAYTOSTRING_OFFSET))(chars);
		}

		static ::System::String* IntToString(::Il2CppArray<::System::Int32>* unicodes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_OFFSET))(unicodes);
		}

		static ::System::String* UintToString(::System::Collections::Generic::List_1<::System::UInt32>* unicodes)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_UINTTOSTRING_OFFSET))(unicodes);
		}

		static ::System::String* IntToString_1(::Il2CppArray<::System::Int32>* unicodes, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_INTTOSTRING_1_OFFSET))(unicodes, start, length);
		}

		static ::System::Boolean Compare(::UnityEngine::Color32 a, ::UnityEngine::Color32 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_OFFSET))(a, b);
		}

		static ::System::Boolean CompareRGB(::UnityEngine::Color32 a, ::UnityEngine::Color32 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_OFFSET))(a, b);
		}

		static ::System::Boolean Compare_1(::UnityEngine::Color a, ::UnityEngine::Color b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_1_OFFSET))(a, b);
		}

		static ::System::Boolean CompareRGB_1(::UnityEngine::Color a, ::UnityEngine::Color b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARERGB_1_OFFSET))(a, b);
		}

		static ::UnityEngine::Color32 Multiply(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_MULTIPLY_OFFSET))(c1, c2);
		}

		static ::UnityEngine::Color32 Tint(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TINT_OFFSET))(c1, c2);
		}

		static ::UnityEngine::Color32 Tint_1(::UnityEngine::Color32 c1, ::System::Single tint)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_TINT_1_OFFSET))(c1, tint);
		}

		static ::UnityEngine::Color MinAlpha(::UnityEngine::Color c1, ::UnityEngine::Color c2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_MINALPHA_OFFSET))(c1, c2);
		}

		static ::System::Boolean Compare_2(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::System::Int32 accuracy)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_2_OFFSET))(v1, v2, accuracy);
		}

		static ::System::Boolean Compare_3(::UnityEngine::Quaternion q1, ::UnityEngine::Quaternion q2, ::System::Int32 accuracy)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EXTENSIONMETHODS_COMPARE_3_OFFSET))(q1, q2, accuracy);
		}
	};
}
