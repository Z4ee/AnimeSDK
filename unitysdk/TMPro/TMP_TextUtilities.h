#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/CaretPosition.h"
#include "unitysdk/TMPro/TMP_TextUtilities_LineSegment.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET UNITYSDK_OFFSET(0x1F31A200)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET UNITYSDK_OFFSET(0x1F31A540)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET UNITYSDK_OFFSET(0x1F31C6C0)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET UNITYSDK_OFFSET(0x1F31C910)
#define TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET UNITYSDK_OFFSET(0x1F31A9B0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET UNITYSDK_OFFSET(0x1F319680)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET UNITYSDK_OFFSET(0x1F318220)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET UNITYSDK_OFFSET(0x1F3193E0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET UNITYSDK_OFFSET(0x1F31CFC0)
#define TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET UNITYSDK_OFFSET(0x1F31B3D0)
#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1F3190A0)
#define TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x1F317F90)
#define TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F31EA60)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET UNITYSDK_OFFSET(0x1F31EC10)
#define TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F31EB30)
#define TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x1F31ED10)
#define TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET UNITYSDK_OFFSET(0x1F31E880)
#define TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F31A3A0)
#define TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1F31A110)
#define TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1F318C70)
#define TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET UNITYSDK_OFFSET(0x1F31ED30)
#define TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET UNITYSDK_OFFSET(0x1F31E9D0)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET UNITYSDK_OFFSET(0x1F303B30)
#define TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET UNITYSDK_OFFSET(0x1F31EA30)
#define TMPRO_TMP_TEXTUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F31EE20)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextUtilities_TypeDefinitionIndex = 44671;

	class TMP_TextUtilities : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_m_rectWorldCorners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TMP_TextUtilities_TypeDefinitionIndex)->GetStaticField(0x5A930);
		}
		// static const ::System::String* k_lookupStringL; // 0x0
		// static const ::System::String* k_lookupStringU; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetCursorIndexFromPosition(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetCursorIndexFromPosition_1(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3, ::TMPro::CaretPosition& a4)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::TMPro::CaretPosition&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETCURSORINDEXFROMPOSITION_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindNearestLine(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindNearestCharacterOnLine(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::UnityEngine::Camera* a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTERONLINE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsIntersectingRectTransform(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_ISINTERSECTINGRECTTRANSFORM_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindIntersectingCharacter(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGCHARACTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindNearestCharacter(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTCHARACTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindIntersectingWord(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindNearestWord(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindIntersectingLine(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindIntersectingLink(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDINTERSECTINGLINK_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindNearestLink(::TMPro::TMP_Text* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Int32(*)(::TMPro::TMP_Text*, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_FINDNEARESTLINK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PointIntersectRectangle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_POINTINTERSECTRECTANGLE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ScreenPointToWorldPointInRectangle(::UnityEngine::Transform* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Camera* a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_SCREENPOINTTOWORLDPOINTINRECTANGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IntersectLinePlane(::TMPro::TMP_TextUtilities_LineSegment a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_TextUtilities_LineSegment, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_INTERSECTLINEPLANE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single DistanceToLine(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_DISTANCETOLINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Char ToLowerFast(::System::Char a1)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOLOWERFAST_OFFSET))(a1);
		}

		static ::System::Char ToUpperFast(::System::Char a1)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERFAST_OFFSET))(a1);
		}

		static ::System::UInt32 ToUpperASCIIFast(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_TOUPPERASCIIFAST_OFFSET))(a1);
		}

		static ::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETHASHCODE_OFFSET))(a1);
		}

		static ::System::Int32 GetSimpleHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODE_OFFSET))(a1);
		}

		static ::System::UInt32 GetSimpleHashCodeLowercase(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_GETSIMPLEHASHCODELOWERCASE_OFFSET))(a1);
		}

		static ::System::Int32 HexToInt(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_HEXTOINT_OFFSET))(a1);
		}

		static ::System::Int32 StringHexToInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTUTILITIES_STRINGHEXTOINT_OFFSET))(a1);
		}
	};
}
