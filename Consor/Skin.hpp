#ifndef CONSOR_SKIN_H
#define CONSOR_SKIN_H

#include "Units.hpp"

namespace Consor
{
	class ISkin
	{
	public:
		virtual CColour LabelForeground() const = 0;
		virtual CColour LabelForegroundFocused() const = 0;

		virtual CColour WindowBorder() const = 0;
		virtual CColour WindowBackground() const = 0;
		virtual CColour WindowForeground() const = 0;

		virtual CColour ScrollForeground() const = 0;
		virtual CColour ScrollForegroundFocused() const = 0;
		virtual CColour ScrollBackground() const = 0;

		virtual CColour TextBoxForeground() const = 0;
		virtual CColour TextBoxForegroundFocused() const = 0;
		virtual CColour TextBoxBackground() const = 0;
	};

	class CDefaultSkin : public ISkin
	{
	public:
		CDefaultSkin()
		{
		}

		virtual CColour LabelForeground() const
		{
			return CColour(1, 1, 1);
		}

		virtual CColour LabelForegroundFocused() const
		{
			return CColour(1, 0, 0);
		}

		virtual CColour WindowBorder() const
		{
			return CColour(1, 1, 1);
		}

		virtual CColour WindowBackground() const
		{
			return CColour(0, 0, 1);
		}

		virtual CColour WindowForeground() const
		{
			return CColour(1, 1, 1);
		}

		virtual CColour ScrollForeground() const
		{
			return CColour(1, 1, 1);
		}

		virtual CColour ScrollForegroundFocused() const
		{
			return CColour(1, 0, 0);
		}	

		virtual CColour ScrollBackground() const
		{
			return CColour(0, 0, 0.5);
		}

		virtual CColour TextBoxForeground() const
		{
			return CColour(1, 1, 1);
		}

		virtual CColour TextBoxForegroundFocused() const
		{
			return CColour(1, 0, 0);
		}

		virtual CColour TextBoxBackground() const
		{
			return CColour::None();
		}
	};
}

#endif