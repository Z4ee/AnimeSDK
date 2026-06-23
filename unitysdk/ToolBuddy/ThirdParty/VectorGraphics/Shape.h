#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/BezierContour.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/PathProperties.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class IFill; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_CONTOURS_OFFSET UNITYSDK_OFFSET(0x1C619160)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C6191A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILL_OFFSET UNITYSDK_OFFSET(0x1C619180)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_ISCONVEX_OFFSET UNITYSDK_OFFSET(0x1C619200)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_PATHPROPS_OFFSET UNITYSDK_OFFSET(0x1C6191D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_CONTOURS_OFFSET UNITYSDK_OFFSET(0x1C619170)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C6191C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILL_OFFSET UNITYSDK_OFFSET(0x1C619190)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_ISCONVEX_OFFSET UNITYSDK_OFFSET(0x1C619210)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_PATHPROPS_OFFSET UNITYSDK_OFFSET(0x1C6191F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C602EA0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 31173;

	class Shape : public ::System::Object
	{
	public:
		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* _Contours_k__BackingField; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::PathProperties _PathProps_k__BackingField; // 0x18
		::ToolBuddy::ThirdParty::VectorGraphics::IFill* _Fill_k__BackingField; // 0x30
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D m_FillTransform; // 0x38
		::System::Boolean _IsConvex_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* get_Contours()
		{
			return ((::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_CONTOURS_OFFSET))(this);
		}

		::System::Void set_Contours(::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ToolBuddy::ThirdParty::VectorGraphics::BezierContour>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_CONTOURS_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::IFill* get_Fill()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::IFill*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILL_OFFSET))(this);
		}

		::System::Void set_Fill(::ToolBuddy::ThirdParty::VectorGraphics::IFill* value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::IFill*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILL_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D get_FillTransform()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_FILLTRANSFORM_OFFSET))(this);
		}

		::System::Void set_FillTransform(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_FILLTRANSFORM_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::PathProperties get_PathProps()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::PathProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_PATHPROPS_OFFSET))(this);
		}

		::System::Void set_PathProps(::ToolBuddy::ThirdParty::VectorGraphics::PathProperties value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::PathProperties))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_PATHPROPS_OFFSET))(this, value);
		}

		::System::Boolean get_IsConvex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_GET_ISCONVEX_OFFSET))(this);
		}

		::System::Void set_IsConvex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SHAPE_SET_ISCONVEX_OFFSET))(this, value);
		}
	};
}
