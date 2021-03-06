/*
 * JTouchBar
 *
 * Copyright (c) 2021 thizzer.com
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 *
 * @author  	C. Klein
 */
package com.thizzer.jtouchbar.item;

import com.thizzer.jtouchbar.common.Color;
import com.thizzer.jtouchbar.common.Image;

public class SliderTouchBarItem extends TouchBarItem {

    public SliderTouchBarItem(String identifier) {
        super(identifier);
    }

    private double _minValue;
    private double _maxValue;

    private double _increment;

    private Image _minImage;
    private Image _maxImage;

    private String _label;

    private Color _fillColor;

    private SliderActionListener _actionListener;

    public SliderActionListener getActionListener() {
        return _actionListener;
    }

    public void setActionListener(SliderActionListener actionListener) {
        _actionListener = actionListener; // dynamically resolved so does not require update to be called.
    }

    public double getMinValue() {
        return _minValue;
    }

    public void setMinValue(double minValue) {
        _minValue = minValue;
        update();
    }

    public double getMaxValue() {
        return _maxValue;
    }

    public void setMaxValue(double maxValue) {
        _maxValue = maxValue;
        update();
    }

    public Image getMinImage() {
        return _minImage;
    }

    public void setMinImage(Image minImage) {
        _minImage = minImage;
        update();
    }

    public Image getMaxImage() {
        return _maxImage;
    }

    public void setMaxImage(Image maxImage) {
        _maxImage = maxImage;
        update();
    }

    public double getIncrement() {
        return _increment;
    }

    public void setIncrement(double increment) {
        _increment = increment;
        update();
    }

    public String getLabel() {
        return _label;
    }

    public void setLabel(String label) {
        _label = label;
        update();
    }

    public Color getFillColor() {
        return _fillColor;
    }

    public void setFillColor(Color color) {
        _fillColor = color;
        update();
    }

    @FunctionalInterface
    public interface SliderActionListener {
        void sliderValueChanged(SliderTouchBarItem slider, double value);
    }
}

